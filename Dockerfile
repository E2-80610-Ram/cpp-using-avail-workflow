# Use an official GCC image as the base image
FROM gcc:latest

# Set the working directory
WORKDIR /app

# Copy the current directory contents into the container at /app
COPY . .

# Build the application
RUN make

# Command to run the executable
CMD ["./hello"]
